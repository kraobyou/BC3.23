/*#include<iostream>
using namespace std;
class Student
{
public:
	//�˴���ӹ��캯��
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
	Student stud(101, 78.5); //���ù��캯��
	stud.display();
	//stud.change(101, 80.5);
	//stud.display();
	fun(stud);
}*/
/*����������������ָ���Ӧ��
����һ��Employee�࣬���а����������ֵ���ַ�����к��ʱ�����ԣ�
�Լ�change_name()��display()�Ⱥ�����
display()��ʾ�������ֵ���ַ�����к��ʱ�����ԣ�change_name()�ı��������ԡ�
��	��д���򲢲�������ࡣ
��	Ӧ�ö���ָ�����change_name()��display()������
����������5��Ԫ�صĶ������飬ÿ��Ԫ�ض���Employee�����
�������������ÿ������ĸ����ԡ�
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