# SQL Data Types

## what is a data type in SQL?

In SQL a data type is and attribute that specifies the type of the data that the object can hold, it can be a integer data, character data , data  and time data, binary string and so on.

## Data Types in SQL

## 1. Numeric Data Type

Numeric Data Types are broadly divided into two parts `EXACT` Numberic Data Types and `APPROXIMATE` Numeric Data Type.
SQL support strandard exact integer types `INTEGER` or `INT`, `SMALLINT`,`TINYINT`, `MEDIUMINT`, `BIGINT` and approximate numeric data types `FLOAT`, `REAL` and `DOUBLE PRECISION`.

The keyword `INT` is a synonym for `INTEGER`, and the keywords `DEC` and `FIXED` are synonyms for `DECIMAL`. `MySQL` treats `DOUBLE` as a synonym for `DOUBLE PRECISION` (a nonstandard extension). MySQL also treats `REAL` as a synonym for `DOUBLE PRECISION` (a nonstandard variation), unless the `REAL_AS_FLOAT` SQL mode is enabled.

Here is the comparison table for `EXACT` numeric data type.

Type |  Storage(Bytes)  |  Min Value Signed  |  Min Vale Unsigned  |  Max Val Unsigned  |  Max Value Unsigned
-----|------------------|--------------------|---------------------|--------------------|--------------------
`TINYINT`|1|-128|0|127|255
`SMALLINT`|2|-32768|0|32767|65535
`MEDIUMINT`|3|-8388608|0|8388607|16777215
`INT`|4|-2147483648|0|2147483647|4294967295
`BIGINT`|8|-2 <sup>63</sup>|0|2<sup>63</sup>-1|2<sup>64</sup>-1

`NOTE` - Microsoft SQL Server (Transact-SQL) has two more data types that comes under the category of exact value numeric data types.
 Data type | Range | Storage
 ----------|-------|--------
 money| -922,337,203,685,477.5808 to 922,337,203,685,477.5807 (-922,337,203,685,477.58to 922,337,203,685,477.58 for Informatica. Informatica only supports two decimals, not four.) | 8 bytes
 smallmoney| - 214,748.3648 to 214,748.3647 | 4 bytes

The money and smallmoney data types are accurate to a ten-thousandth of the monetary units that they represent. For Informatica, the money and smallmoney data types are accurate to a one-hundredth of the monetary units that they represent.

### Numeric Data Type Syntax

* `BIT[ (M) ]` - A bit-value type. M indicates the number of bits per value, from 1 to 64. The default is 1 if `M` is omitted.

* `TINYINT[(M)] [UNSIGNED] [ZEROFILL]`- A very small integer. The signed range is -128 to 127. The unsigned range is 0 to 255.

* `BOOL, BOOLEAN` - These types are synonyms for `TINYINT(1)`. A value of zero is considered false. Nonzero values are considered true:

```sql
mysql> SELECT IF(0, 'true, 'false');
```

```bash
+------------------------+
| IF(0, 'true', 'false') |
+------------------------+
| false                  |
+------------------------+
```

```sql
mysql> SELECT IF(1, 'true', 'false');
```

```bash
+------------------------+
| IF(1, 'true', 'false') |
+------------------------+
| true                   |
+------------------------+
```

```sql
mysql> SELECT IF(2, 'true', 'false');
```

```bash
+------------------------+
| IF(2, 'true', 'false') |
+------------------------+
| true                   |
+------------------------+
```

* `SMALLINT[(M)] [UNSIGNED] [ZEROFILL]` - A small integer. The signed range is -32768 to 32767. The unsigned range is 0 to 65535.

* `MEDIUMINT[(M)] [UNSIGNED] [ZEROFILL]` - A medium-sized integer. The signed range is -8388608 to 8388607. The unsigned range is 0 to 16777215.

* `INT[(M)] [UNSIGNED] [ZEROFILL]` - A normal-size integer. The signed range is -2147483648 to 2147483647. The unsigned range is 0 to 4294967295.

* `INTEGER[(M)] [UNSIGNED] [ZEROFILL]` - This type is a synonym for `INT`.

* `BIGINT[(M)] [UNSIGNED] [ZEROFILL]` - A large integer. The signed range is -9223372036854775808 to 9223372036854775807. The unsigned range is 0 to 18446744073709551615.

* `DECIMAL[(M[,D])] [UNSIGNED] [ZEROFILL]` - `M` is the total number of digits (the precision) and `D` is the number of digits after the decimal point (the scale). The decimal point and (for negative numbers) the - sign are not counted in `M`.


* `FLOAT[(M,D)] [UNSIGNED] [ZEROFILL]` - `M` is the total number of digits and `D` is the number of digits following the decimal point. If M and D are omitted, values are stored to the limits permitted by the hardware. A single-precision floating-point number is accurate to approximately 7 decimal places.


## 2. Date and Time Data Types

SQL has four types of Date and Time data types, each data type temporal has its own range of valid values  as well as ZERO value. MySQL permits you to store  `zero` value of `0000-00-00` as a `dummy date`. In some cases, this is more convenient than using `NULL` values, and uses less data and index space.

Data Type | `Zero` Value
----------|-------------
DATE|'0000-00-00'
TIME|'00:00:00'
DATETIME|'0000-00-00 00:00:00'
TIMESTAMP|'0000-00-00 00:00:00'
YEAR | 0000

### Date and Time Data Type Syntax

* `DATE` - A date. The supported range is `1000-01-01` to `9999-12-31`. MySQL displays DATE values in `YYYY-MM-DD` format, but permits assignment of values to DATE columns using either strings or numbers.

* `DATETIME[(fsp)]` - A date and time combination. The supported range is `1000-01-01 00:00:00.000000` to `9999-12-31 23:59:59.999999`. MySQL displays DATETIME values in `YYYY-MM-DD hh:mm:ss[.fraction]` format, but permits assignment of values to DATETIME columns using either strings or numbers. An optional fsp value in the range from 0 to 6 may be given to specify fractional seconds precision.

* `TIMESTAMP[(fsp)]` - A timestamp. The range is `1970-01-01 00:00:01.000000` UTC to `2038-01-19 03:14:07.999999` UTC. TIMESTAMP values are stored as the number of seconds since the epoch ('1970-01-01 00:00:00' UTC).

* `TIME[(fsp)]` - A time. The range is `-838:59:59.000000` to `38:59:59.000000`. MySQL displays TIME values in `hh:mm:ss[.fraction]` format, but permits assignment of values to TIME columns using either strings or numbers.

* `YEAR[(4)]` - A year in 4-digit format. MySQL displays YEAR values in YYYY format, but permits assignment of values to YEAR columns using either strings or numbers. Values display as 1901 to 2155, or 0000.

## 3. String Data Types
The String data types in SQL are `CHAR`, `VARCHAR`, `BINARY`, `VARBINARY`, `BLOB`, `TEXT`, `ENUM` and `Text`.

### String Data Type Syntax

* `CHAR[(M)] AND VARCHAR[(M)]` - CHAR and VARCHAR  differ with the way they store and retrieve, and maximum length. The CHAR and VARCHAR types are declared with a length that indicates the maximum number of characters you want to store. For example, CHAR(30) can hold up to 30 characters.

```sql
mysql> CREATE TABLE vc (v VARCHAR(4), c CHAR(4));
Query OK, 0 rows affected (0.01 sec)

mysql> INSERT INTO vc VALUES ('ab  ', 'ab  ');
Query OK, 1 row affected (0.00 sec)

mysql> SELECT CONCAT('(', v, ')'), CONCAT('(', c, ')') FROM vc;
+---------------------+---------------------+
| CONCAT('(', v, ')') | CONCAT('(', c, ')') |
+---------------------+---------------------+
| (ab  )              | (ab)                |
+---------------------+---------------------+
1 row in set (0.06 sec)
```

* `BINARY[(M)]` - The BINARY type is similar to the CHAR type, but stores binary byte strings rather than nonbinary character strings. An optional length M represents the column length in bytes. If omitted, M defaults to 1.

* `VARBINARY(M)` - The VARBINARY type is similar to the VARCHAR type, but stores binary byte strings rather than nonbinary character strings. M represents the maximum column length in bytes.

```sql
mysql> CREATE TABLE t (c BINARY(3));
Query OK, 0 rows affected (0.01 sec)

mysql> INSERT INTO t SET c = 'a';
Query OK, 1 row affected (0.01 sec)

mysql> SELECT HEX(c), c = 'a', c = 'a\0\0' from t;
+--------+---------+-------------+
| HEX(c) | c = 'a' | c = 'a\0\0' |
+--------+---------+-------------+
| 610000 |       0 |           1 |
+--------+---------+-------------+
1 row in set (0.09 sec)
```

* `TINYTEXT [CHARACTER SET charset_name] [COLLATE collation_name]` - A TEXT column with a maximum length of 255 (28 − 1) characters. The effective maximum length is less if the value contains multibyte characters. Each TINYTEXT value is stored using a 1-byte length prefix that indicates the number of bytes in the value.

* `BLOB[(M)]` - A BLOB column with a maximum length of 65,535 (216 − 1) bytes. Each BLOB value is stored using a 2-byte length prefix that indicates the number of bytes in the value.

  * `TINYBLOB` - A BLOB column with a maximum length of 255 (2<sup>8</sup> − 1) bytes. Each TINYBLOB value is stored using a 1-byte length prefix that indicates the number of bytes in the value.

  * `MEDIUMBLOB` - A BLOB column with a maximum length of 16,777,215 (2<sup>24</sup> − 1) bytes. Each MEDIUMBLOB value is stored using a 3-byte length prefix that indicates the number of bytes in the value.

  * `LONGBLOB` - A BLOB column with a maximum length of 4,294,967,295 or 4GB (232 − 1) bytes. The effective maximum length of LONGBLOB columns depends on the configured maximum packet size in the client/server protocol and available memory. Each LONGBLOB value is stored using a 4-byte length prefix that indicates the number of bytes in the value.

* `TEXT[(M)] [CHARACTER SET charset_name] [COLLATE collation_name]` - A TEXT column with a maximum length of 65,535 (2<sup>16</sup> − 1) characters. The effective maximum length is less if the value contains multibyte characters. Each TEXT value is stored using a 2-byte length prefix that indicates the number of bytes in the value.

  * `MEDIUMTEXT [CHARACTER SET charset_name] [COLLATE collation_name]` - A TEXT column with a maximum length of 16,777,215 (2<sup>24</sup> − 1) characters. The effective maximum length is less if the value contains multibyte characters. Each MEDIUMTEXT value is stored using a 3-byte length prefix that indicates the number of bytes in the value.

  * `LONGTEXT [CHARACTER SET charset_name] [COLLATE collation_name]` - A TEXT column with a maximum length of 4,294,967,295 or 4GB (2<sup>32</sup> − 1) characters. The effective maximum length is less if the value contains multibyte characters. The effective maximum length of LONGTEXT columns also depends on the configured maximum packet size in the client/server protocol and available memory. Each LONGTEXT value is stored using a 4-byte length prefix that indicates the number of bytes in the value.

* `ENUM('value1','value2',...) [CHARACTER SET charset_name] [COLLATE collation_name]` - An enumeration. A string object that can have only one value, chosen from the list of values 'value1', 'value2', ..., NULL or the special '' error value. ENUM values are represented internally as integers. An ENUM column can have a maximum of 65,535 distinct elements.

```sql
CREATE TABLE shirts (
    name VARCHAR(40),
    size ENUM('x-small', 'small', 'medium', 'large', 'x-large')
);
INSERT INTO shirts (name, size) VALUES ('dress shirt','large'), ('t-shirt','medium'),
  ('polo shirt','small');
SELECT name, size FROM shirts WHERE size = 'medium';
+---------+--------+
| name    | size   |
+---------+--------+
| t-shirt | medium |
+---------+--------+
```

* `SET('value1','value2',...) [CHARACTER SET charset_name] [COLLATE collation_name]` - A set. A string object that can have zero or more values, each of which must be chosen from the list of values 'value1', 'value2', ... SET values are represented internally as integers. A SET column can have a maximum of 64 distinct members.The maximum supported length of an individual SET element is M <= 255 and (M x w) <= 1020, where M is the element literal length and w is the number of bytes required for the maximum-length character in the character set.

```sql
mysql> CREATE TABLE myset (col SET('a', 'b', 'c', 'd'));
mysql> INSERT INTO myset (col) VALUES
-> ('a,d'), ('d,a'), ('a,d,a'), ('a,d,d'), ('d,a,d');
Query OK, 5 rows affected (0.01 sec)
Records: 5  Duplicates: 0  Warnings: 0
```

Here is one more example on string data type

```sql
CREATE TABLE someTable (
  c1 VARCHAR(10) CHARACTER SET latin1 COLLATE latin1_bin,
  c2 TEXT CHARACTER SET utf8mb4 COLLATE utf8mb4_bin,
  c3 c2 BLOB,
  c4 ENUM('a','b','c') CHARACTER SET binary
) CHARACTER SET utf8mb4;
```

## 4. Miscellaneous Data Types

* `JSON` Data Type - The JSON data type provides these advantages over storing JSON-format strings in a string column:
  * Automatic validation of JSON documents stored in JSON columns. Invalid documents produce an error.

  * Optimized storage format. JSON documents stored in JSON columns are converted to an internal format that permits quick read access to document elements.

```sql
mysql> CREATE TABLE t1 (jdoc JSON);
Query OK, 0 rows affected (0.20 sec)

mysql> INSERT INTO t1 VALUES('{"key1": "value1", "key2": "value2"}');
Query OK, 1 row affected (0.01 sec)

```
