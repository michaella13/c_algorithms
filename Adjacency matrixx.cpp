#include<iostream>
using namespace std;
class AdjacencyMatrix{
	private:
		int nodes;
		int **matrix;
		public:
			AdjacencyMatrix(int nodes){
				this->nodes=nodes;
				//initializing a 2 dimensional array
				matrix=new int *[nodes];
	for(int i=0;i<nodes;i++){
			matrix[i]=new int [nodes];
			for(int j=0;j<nodes;j++){
				matrix[i][j]=0;
			}
	}
	}
	
	 void display()
    {
        for (int i = 0; i < nodes; i++)
        {
            for (int j = 0; j < nodes; j++)
                cout << matrix[i][j] << " ";
            cout << "End" << endl;
        }
    }
    void add_edge(int origin, int destination){
    	if(origin<0||destination<0||origin>=nodes||destination>=nodes){
    		cout<<"Invalid node"<<endl;
    		return;
		}
		matrix[origin][destination]=1;
	}
	  void delete_edge(int origin, int destination){
    	if(origin<0||destination<0||origin>=nodes||destination>=nodes){
    		cout<<"Invalid node"<<endl;
    		return;
		}
		matrix[origin][destination]=0;
	}
		

};
int main(){

AdjacencyMatrix adj(5);
	adj.display();
//	cout<<"Adding an edge"<<endl;
//	adj.add_edge(0,3);
//		adj.display();
//		cout<<"Deleting edge"<<endl;
//			adj.delete_edge(0,3);
//		adj.display();
}
