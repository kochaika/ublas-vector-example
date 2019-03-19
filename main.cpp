#include <boost/numeric/ublas/io.hpp>
#include <boost/numeric/ublas/vector.hpp>



int main(int argc, char* argv[]) {
    using namespace boost::numeric::ublas;
    vector<double> v (3);
    for (unsigned i = 0; i < v.size (); ++ i)
        v (i) = i;
    v *= 10;
    vector<double> v1 (3);
    v1[0] = 7;
    v1[1] = 7;
    v1[2] = 7;
    v+=v1;
    std::cout << v << std::endl;
}
