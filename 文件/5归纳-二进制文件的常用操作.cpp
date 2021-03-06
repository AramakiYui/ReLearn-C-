1、写入一个新文件
---------------------------------------------------------------------
	string s="hello!";
	ofstream f("f.txt",ios::binary);
	f.write((char*)s.c_str(),s.size());
	f.close();
---------------------------------------------------------------------
说明：
当使用ofstream定义文件句柄时，后面使用ios::binary或者ios::out参数，都会新建
一个（或者覆盖原来的）文件，如果原来的文件存在，里面的内容将会被删除。
---------------------------------------------------------------------
2、同时读写一个文件
---------------------------------------------------------------------
	 使用下面的方法建立文件句柄：
fstream f("test.exe",ios::in|ios::out|ios::binary);
---------------------------------------------------------------------
3、文件读写的指针位置
---------------------------------------------------------------------
（1）读文件的第一个字节
---------------------------------------------------------------------
char c;
	f.seekg(0,ios::beg);//读
	f.read((char*)&c,1);
---------------------------------------------------------------------
（2）写文件的第一个字节
---------------------------------------------------------------------
	char c;
	f.seekp(0,ios::beg);//写
	f.write((char*)&c,1);
---------------------------------------------------------------------
（3）读文件的最后一个字节
---------------------------------------------------------------------
	char c;
	f.seekg(-1,ios::end);
	f.read((char*)&c,1);
---------------------------------------------------------------------
（4）写文件的最后一个字节
---------------------------------------------------------------------
	char c;
	f.seekp(-1,ios::end);
	f.write((char*)&c,1);
---------------------------------------------------------------------
说明：实际上，文件的最后一个字节是f.eof()，下面的指针就指向这个字节：
---------------------------------------------------------------------
f.seekg(0,ios::end);
f.seekp(0,ios::end);
---------------------------------------------------------------------
而且，当指针到达f.eof()后，会停在这里不动，让移动读写指针的操作失灵，要想重新解
锁，必须使用f.clear()函数。
---------------------------------------------------------------------
（5）获取文件长度（读取文件内容到字符串）
---------------------------------------------------------------------
f.seekg(0,ios::end);
string::size_type n=f.tellg();
s.resize(n)//重新分配字符串长度
f.seekg(0,ios::beg);//指向文件开头的第1个字节
f.read((char*)s.c_str(),n);//将文件内容读入s
=====================================================================


