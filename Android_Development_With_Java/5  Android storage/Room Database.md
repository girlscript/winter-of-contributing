# Room Database
 Room is a library which can be called an advanced version of SQL. It makes the use of SQLite easier by using **annotations**. With the help of Room Database, we can easily create the database and perform CRUD operations (Create, Read, Update, Delete).
 To start with Room Database we need to add the following dependencies in app build.gradle :
 
 ```XML
  def room_version="2.2.4"
    implementation "androidx.room:room-runtime:$room_version"
    annotationProcessor "androidx.room:room-compiler:$room_version"
```
 
 ## Components
 Room has three main components:
 * Entity
 * Dao
 * Database
 
 ### 1) Entity
 Entity represents a table within the Database. Room creates a seperate table for all classes using ```@Entity``` annotation. They are usually small model classes without any logic. The columns of the table correspond to the fields in the Entity class.
 It includes
  * foreignKeys
  * indices
  * primaryKeys
  * tableName
  
  An example of Entity Class is as follows :
  
  ```JAVA
  
@Entity(tableName =Constants.TABLE_NAME_NOTE)
public class Note implements Serializable {
@PrimaryKey(autoGenerate = true)
    private long id;

@ColumnInfo(name="note_content")
    private String content; //name of the column is note_content and not content
    private String title;
    //Constructor

    public Note(String content, String title) {
        this.content = content;
        this.title = title;
    }

    @Ignore
    public Note()
    {}


    public long getId() {
        return id;
    }

    public void setId(long id) {
        this.id = id;
    }

    public String getContent() {
        return content;
    }

    public void setContent(String content) {
        this.content = content;
    }

    public String getTitle() {
        return title;
    }

    public void setTitle(String title) {
        this.title = title;
    }
    
    @Override
    public boolean equals(@Nullable Object obj) {
        if(this==obj)
            return true;
        if(!(obj instanceof Note))
            return false; // check if we have an instance of note
        Note note=(Note) obj;
        return title != null ? title.equals(note.title) : note.title==null;

    }



    @NonNull
    @Override
    public String toString() {
        return  "Note{"+"id=" +id + ", content='" +content + '\'' + ", title='" + title + '}';


    }
}

```

In the above code we can see that apart from ```@Entity``` there are some other annotations which has been used. So, let's study these annotations and their attributes:
1) ```@PrimaryKey```: It refers to a unique value in the table. Two columns cannot have the same Primary Key.
2) ```@PrimaryKey(autoGenerate = true)```: If autoGenerate is set as true, then values are automatically generated to the Primary Key in the Table.
3) ```@ColumnInfo```: It allows specifying custom information about the columns in the table
4) ```@Ignore```: This annotation means that the field will not be persisted by the Room
5) ```@Embedded```: This annotation means that nested fields can be referenced directly in the SQL queries.


### 2) Dao
The function of Dao is similar to that of the function of a Cursor in SQLite.The queries in Room are defined using annotations in Dao.
An example of Dao class is :

```JAVA
@Dao
public interface NoteDao {
    @Query("SELECT * FROM " +Constants.TABLE_NAME_NOTE)
    List<Note> getNotes();

    @Insert
    void insertNote(Note note);

    @Update
    void updateNote (Note note);

    @Delete
    void deleteNote (Note note);

}
```

### 3) Database
This is the point which connects the App's data with the database. To create a Database we create an abstract class which extends RoomDatabase. It is annotated with ```@Database```. It contains all the Entities and the Daos.
An example of this class is:

```JAVA

@Database(entities = {Note.class}, version = 1, exportSchema = false)// we are telling the database that Note class contains the entities
public abstract class NoteDatabase extends RoomDatabase {

    public  abstract NoteDao getNoteDao();
    private static NoteDatabase noteDB;
    public static /*synchronised*/ NoteDatabase getInstance(Context context)
    {
        if(null==noteDB)
        {
            noteDB=buildDatabaseInstance(context);
        }
        return noteDB;
    }

    private static NoteDatabase buildDatabaseInstance(Context context)
    {
        return Room.databaseBuilder(context, NoteDatabase.class,Constants.DB_NAME).allowMainThreadQueries().build(); // acquires instance of database during runtime
    }

    public void cleanUp()
    {
        noteDB=null;
    }
}
```


## Summary of the Steps to create a Room Database:
1) Add the Gradle Dependencies in build.gradle 
2) Create a Model Class with ```@Entity``` annotation
3) Create Data Access Object (DAO) with ```@Dao``` annotation
4) Create the Database with ```@Database``` annotation

# _______________________________________________________________________________________________________________________
