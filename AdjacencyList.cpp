#include<iostream>
#include<vector>
using namespace std;

class AdjacencyList{
	private:
		int node;
		vector <int>*list;
		
	public:
		AdjacencyList(int node){
			this->node = node;
			list = new vector<int>[node];
		} 
	void display(){
		for(int i =0; i<node; i++){
			cout<<"Node " << i;
			for(auto v:list[i]){
				cout<<"->"<< v;
			}
			cout << endl;
		}
	}
	void add_edge(int origin, int destination){
		//an edge can be on the front or back because it is undirected
		list[origin].push_back(destination);
		list[destination].push_back(origin);
	}
	void delete_edge(int origin,int destination){
		for(int i=0;i<list[origin].size();i++){
			//if u delete the destination of the origin the 
			if(list[origin][i]==destination){
				list[origin].erase(list[origin].begin()+i);
			}
				break;
		}
		
				for(int i=0;i<list[destination].size();i++){
			//if u delete the destination of the origin the 
			if(list[destination][i]==origin){
				list[destination].erase(list[destination].begin()+i);
			}
			break;
			
		}
	}
	
};

int main(){
	AdjacencyList list(5);
	list.display();

	list.add_edge(0,2);
	list.add_edge(0,0);
		cout<<endl<<"after adding" << endl<<endl;
//		
	list.display();
//	list.delete_edge(1,0);
//	cout<<endl<<"after deleting" << endl<<endl;
//		list.display();
	
	return 0;
}









