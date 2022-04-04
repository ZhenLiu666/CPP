#include <stdio.h>
using namespace std;

class node {
  private:
    int number_local;
    int number_global;
    int dimension;
    double *coordinate;

  public:
    int &get_number_local();
    int &get_number_global();

    node();
    node(int _number_local, int _number_global, int _dimension);
    ~node();
};

int& node::get_number_local() { return this->number_local; }

int& node::get_number_global() { return this->number_global; }

node::node() {
    // exception
    this->coordinate = new double[dimension];
};

node::node(int _number_local, int _number_global, int _dimension)
    : number_local(_number_global), number_global(_number_global),
      dimension(_dimension) {
    this->coordinate = new double[dimension];
};

node::~node(){
    //exception
    delete[] coordinate;
};