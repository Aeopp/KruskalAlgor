#include <iostream>
#include <vector>
#include <string>
#include <queue>
#include <stack>
#include <algorithm>
using namespace std;
struct node
{
public:
	string name;
	node* parent = this;
	inline bool operator==(const node& rhs) { return &rhs == this; };
	node(const string& pname) :name(pname),parent(this){};
	inline node* getparent()
	{
	/*	if (getparent() == this)return this;
		return parent->getparent();*/
	}
};
struct edge
{
	node* first;
	node* end;
	int cost;
	edge( node* const lhs,  node* const pfrom, const int pcost) :
		end(lhs), first(pfrom), cost(pcost) {};
	
	inline bool operator==(edge* rhs)const
	{
		return rhs == this;
		/*return rhs.first == first &&
			rhs.end == end &&
			rhs.cost == cost;*/
	};
};

class Algor
{
public:
	static void EdgeSort(std::vector<edge*>&ESort)
	{
		static int FinalCost = 0;
		
		sort(ESort.begin(), ESort.end(),
	[](edge*&lhs,edge*&rhs)->bool
		{
			return lhs->cost < rhs->cost;
		});
		// 배열 소팅 완료
		for(auto&E:ESort)
		{
				
		}
	}
};

int main()
{
	node* A = new node("A");
	node* B = new node("B");
	node* C = new node("C");
	node* D = new node("D");
	node* E = new node("E");
	node* F = new node("F");
	node* G = new node("G");
	
	edge AB(A, B, 10);
	edge BD(B, D, 25);
	edge DE(D, E, 22);
	edge EF(E, F, 12);
	edge FG(F, G, 16);
	edge GA(G, A, 28);
	edge DC(D, C, 24);
	edge CE(C, E, 18);
	edge CG(C, G, 14);

	std::vector<node*> nodes = { A,B,C,D,E,F,G };
	std::vector<edge*> edges = { &AB,&BD,&DE,&EF,&FG,&GA,&DC,&CE,&CG };

	
	
}
//	std::vector<edge> edges = { A,B,C,D,E };
	///*Algor::EdgeSort(edges);
	//for (auto& e : edges)cout << e.cost;*/
	//std::vector<edge> dd;
	//dd = { A,B,C,E,D };
	//



