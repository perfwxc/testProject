# include <iostream>
using namespace std;
# include <string>

class Building;
class GoodGay
{
public:
	GoodGay();

	void visit();
	
	Building * building;
};
void GoodGay::visit()
{
	cout << "visit函数正在访问：" << building->m_SittingRoom << endl;
}
class Building
{
public:
	Building();

public:
	string m_SittingRoom;
private:
	string m_BedRoom;
};

Building::Building()
{
	m_SittingRoom = "客厅";
	m_BedRoom = "卧室";
}

GoodGay::GoodGay()
{
	building = new Building;
}



void test01()
{
	GoodGay gg;
	gg.visit();
}

int main()
{
	test01();

	system("pause");
	return 0;
}