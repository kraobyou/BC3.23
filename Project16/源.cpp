/*#include<iostream>
using namespace std;
class Student
{
public:
	//此处添加构造函数
	Student(int a, float b)
	{
		num = a;
		score = b;
	}
	void change(int n, float s) { num = n; score = s; }
	void display() { cout << num << " " << score << endl; }
private:
	int num;
	float score;
};
void fun(Student &b)
{
	b.change(101,80.5);
	b.display();
}
void main()
{
	Student stud(101, 78.5); //调用构造函数
	stud.display();
	//stud.change(101, 80.5);
	//stud.display();
	fun(stud);
}*/
/*任务二：对象数组和指针的应用
声明一个Employee类，其中包括姓名、街道地址、城市和邮编等属性，
以及change_name()和display()等函数。
display()显示姓名、街道地址、城市和邮编等属性，change_name()改变姓名属性。
①	编写程序并测试这个类。
②	应用对象指针调用change_name()和display()函数。
③声明包含5个元素的对象数组，每个元素都是Employee类对象，
再依次输入输出每个对象的各属性。
*/

#include<iostream>
using namespace std;
class Employee
{
private:
	char name[20];
	char city[20];
	char adress[20];
	int num;
public:
	//void change_name(Employee& a);
	void change_name(Employee& a, char x[20]);
	void display(Employee& b);
	void set(Employee& c);

};
/*void	Employee::change_name(Employee& a)
{
	//strcpy_s(name, a);
	cin >> a.name;
}*/
void Employee::change_name(Employee& a, char x[20])
{
	strcpy_s(a.name, x);
}
void Employee::display(Employee& b)
{
	cout << "name:" << name << " city:" << city;
	cout << " adress:" << adress << " num:" << num << endl;
}
void Employee::set(Employee& c)
{
	cin >> c.city >> c.adress >> c.num;
}
int main()
{
	char name[20];
	Employee employee[5];
	Employee* t1;
	t1 = employee;
	for(int i=0;i<5;i++,t1++)
	{
		cin >> name[20];
		//t1->change_name(*t1);
   		t1->change_name(*t1, name);
		t1->set(*t1);
		t1->display(*t1);
    }


}