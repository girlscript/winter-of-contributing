import MySQLdb as db

try:
    con.connect(host="local host", database='db530', user="root", password="root")
    cursor=con.cursor()
    r=cursor.execute("select * from emp")

    if r>0:
        print("no of rows=",r)

        rows=cursor.fetcall()
        for row in rows:
            print(row[0],row[1],row[2],row[3])
    else:
        print("no data")

    con.commit()
    con.close()
except Exception as e:
    print('error:', e)
