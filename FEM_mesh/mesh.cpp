#include <stdio.h>
#include "node.h"
using namespace std;


class edge{

};

class element {
    private:
    // 这里给出几何体的一些参数
    public: 
    element(){};
    element(int){};
};

class result{
    private:
        int* order;
        int number_of_order;
    public:
        result(int _number_of_order);
        ~result();
};

result::result(int _number_of_order): number_of_order(_number_of_order){
    order = new int[ number_of_order ];

}
result::~result(){
    delete[] order;
};

class mesh {
  private:
    int nnd;  // number of node
    int nele; // number of element
    int freedom; 
    node* vertex;
    element* block;

  public:
    mesh();
    ~mesh();
    result vec2block (int _number);
};

result mesh:: vec2block(int _number){
    return this->vertex[ _number]
};