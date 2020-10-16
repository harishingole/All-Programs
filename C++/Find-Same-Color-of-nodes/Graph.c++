#include <bits/stdc++.h> 
#include<iostream>
#include<fstream>

using namespace std;

bool comp(const vector<int> a,const vector<int> b){
        if(a.size() < b.size() ) 
			return false;
        if(a.size() > b.size() ) 
			return true;
        return a[0] <= b[0];
}

class TriangleMess{
	private:
        vector<int> id_queue; // for the depth first search
        vector<bool> visited; 
        vector<int> vertex_colors;  // storing colors of the nodes
        vector<vector<int>> adjacency_list; // adjacency list of the graph

	public:
        TriangleMess() = default;

        // consttructor takes two path, triangles file and color file

        // initializes adjacency_list and vector_colors
TriangleMess(string triangle_path, string color_path){
            // read the triangle file and initialize adjacency_list
	ReadTriangleFile(triangle_path);
            // read the color file and initialize the vector_color
    ReadColorFile(color_path);
           
            // set all vertex visited state to be false
	for(int i = 0 ;i<adjacency_list.size();i++){
		visited.push_back(false);
	    }
}

// Initializes the adjacency_list from triangles mesh data 
void create_adjacency_list(vector<vector<int>> mesh){
	map<int,unordered_set<int>> mp;
	for (auto set:mesh){
		for(auto x: set){
			for(auto y: set){
				if(y!= x){
					mp[x].insert(y);
				}
			}
		}
	}

	// conversions of sets to list and initializing adjacency list
	for(auto set: mp){
	    auto s = set.second;
	    vector<int> v;
	    v.assign(s.begin(),s.end());
	    adjacency_list.push_back(v);
	}
}

vector<int> ParseLine(string line) {
	istringstream sline(line);
    int n;
    vector<int> triangle;
    while (sline >> n) {
        triangle.push_back(n);
    }
    return triangle;
}

        // Reads triangle file line by line
void ReadTriangleFile(string path) {
	ifstream myfile (path);
	vector<vector<int>> mesh{};
	if (myfile) {
		string line;
		getline(myfile,line);
		int number_of_triangle = stoi(line);
		while (getline(myfile, line)) {
			mesh.push_back(ParseLine(line));
		}
	}
	create_adjacency_list(mesh);
           
}

        void ReadColorFile(string path) {
            ifstream myfile (path);
            if (myfile) {
                string line;
                getline(myfile,line);
                int number_vertex_colors = stoi(line);
                while (getline(myfile, line)) {
                    vertex_colors.push_back(stoi(line));
                }
            }
        }


    void SearchColoredConnectedComponents(int v) {
        visited[v] = true;
        id_queue.push_back(v);
        for (auto set : adjacency_list[v]){
            if(!visited[set]){
            if(vertex_colors[v] == vertex_colors[set]){
                SearchColoredConnectedComponents(set);
            }
            }
        }
    }
    
    vector<vector<int>> IdenticallyColoredConnectedComponents() {
        vector<vector<int>> connect;
       
        for (unsigned int i=0; i<adjacency_list.size(); i++){
            if(this->visited[i] == false){

                SearchColoredConnectedComponents(i);
                sort(id_queue.begin(), id_queue.end());
                connect.push_back(id_queue);
                id_queue.clear();
            }
        }
        sort(connect.begin(), connect.end(),comp);
        return connect;
    }

	
};



int main(){
    TriangleMess mess("triangles.txt","color.txt");
    cout<< "Program run Successfully" <<endl;
    vector<vector<int>> sets = mess.IdenticallyColoredConnectedComponents();
    ofstream myfile("rusults.txt", ofstream::app);
	for(auto set: sets){
        for(auto vertex: set)
        myfile<< vertex <<" ";
		myfile<<endl;
    }
	
	
	
	
}
