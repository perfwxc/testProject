# include <iostream>
using namespace std;
# include <string>

class Building
{
public:
	Building()
	{
		m_SittingRoom = "����";
		m_BedRoom = "����";
	}

public:
	string m_SittingRoom;
private:
	string m_BedRoom;
};
class GoodGay
{
public:
	GoodGay()
	{
		building = new Building;
	}

	void visit()
	{
		cout << "visit�������ڷ��ʣ�" << building->m_SittingRoom << endl;
	}
	
	Building * building;
};



/*Building::Building()
{
	m_SittingRoom = "����";
	m_BedRoom = "����";
}*/

/*GoodGay::GoodGay()
{
	building = new Building;
}*/

/*void GoodGay::visit()
{
	cout << "visit�������ڷ��ʣ�" << building->m_SittingRoom << endl;
}*/

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