//#include <iostream>
//#include <string>
//#include <vector>
//
//using namespace std;
//
//class Node{
//private:
//    int data;
//    Node* par;
//    vector<Node*> child;
//    
//public:
//    Node(int dt) {
//        data = dt;
//        par = NULL;
//    }
//    friend class Tree;
//};
//
//class Tree {
//private:
//    vector<Node*> nodes;
//    Node* root;
//
//public:
//    Tree(){
//        root = new Node(1);
//        nodes.push_back(root);
//     
//    }
//    
//    void insert(int pardata, int dt) {
//        for(auto findNode : nodes) {
//            if(findNode->data == pardata) {
//                
//                Node* newNode = new Node(dt);
//                
//                findNode->child.push_back(newNode);
//                newNode->par = findNode;
//                
//                nodes.push_back(newNode);
//          
//                return;
//            }
//        }
//        cout << -1 << endl;
//    }
//    
//    void Delete(int dt) {
//        if(dt == 1) {
//            cout << -1 << endl;
//        }
//        else {
//            for(int i = 0; i < nodes.size(); i++) {
//                if(nodes[i]->data == dt) {
//                    if(nodes[i]->child.size()==0) {
//                        ;
//                    }
//                    
//                       else {
//                           for(int j = 0; j < nodes[i]->child.size(); j++) {
//                               nodes[i]->child[j]->par = nodes[i]->par;
//                               nodes[i]->par->child.push_back(nodes[i]->child[j]);
//                           }
//                           
//                           
//                    }
//                    for(int k = 0; k < nodes[i]->par->child.size(); k++) {
//                        if(nodes[i]->par->child[k]->data == dt) {
//                            nodes[i]->par->child.erase(nodes[i]->par->child.begin()+k);
//                        }
//                    }
//                    nodes.erase(nodes.begin() + i);
//                    return;
//                }
//            }
//            cout << -1 << endl;
//        }
//        
//        
//    }
//    
//    void print(int dt) {
//        for(auto findNode : nodes) {
//            if(findNode->data == dt) {
//                if(findNode->child.size() == 0) {
//                    cout << -1 << endl;
//                    return;
//                }
//                for(auto findChild : findNode->child) {
//                    cout << findChild->data << " ";
//                }
//                cout << endl;
//                return;
//            }
//        }
//        cout << -1 << endl;
//    }
//    
//};
//
//int main() {
//    int T;
//    cin >> T;
//    
//    Tree a;
//    
//    while (T--) {
//        string M;
//        cin >> M;
//        
//        if(M == "insert") {
//            int dt1, dt2;
//            cin >> dt1 >> dt2 ;
//            a.insert(dt1, dt2);
//        }
//        else if(M == "delete") {
//            int dt;
//            cin >> dt;
//            a.Delete(dt);
//        }
//        else if(M == "print") {
//            int dt;
//            cin >> dt;
//            a.print(dt);
//        }
//    }
//    return 0;
//}
