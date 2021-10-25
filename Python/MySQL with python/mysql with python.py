import MySQLdb

try:
    con=MySQLdb.connect(host='localhost',database='db530',user='root',password='root')

    print('connected')
    con.close()
except Exception as e:
    print("Error",e)


print('------------------------adding data into the table in mysql using python mysql connectivity--------------------')
import MySQLdb

## connect to database
try:
    j=MySQLdb.connect(host='localhost',database='db530',user='root',password='root')

    print('connected')
    yamini=j.cursor()
    r=yamini.execute("insert into emp values(12345,'archita','indore',25505)")

    j.commit()
    if r>0:
        print("data inserted")
    else:
       print('data not inserted')
    j.close()
except Exception as e:
    print("Error",e)




