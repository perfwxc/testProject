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
	cout << "visit�������ڷ��ʣ�" << building->m_SittingRoom << endl;
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
	m_SittingRoom = "����";
	m_BedRoom = "����";
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