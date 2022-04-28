#include <iostream>
#include <cmath>

class  complexNumber {
public:

    double ImagineNumber;
    double RealNumber;
    void setValues(double image, double real) {
        ImagineNumber = image;
        RealNumber = real;
    }

      double abs() const {
        return RealNumber * RealNumber - ImagineNumber * ImagineNumber;
    }

    complexNumber operator+(const complexNumber &c) const
    {
        complexNumber temp{};

        temp.RealNumber = RealNumber + c.RealNumber;
        temp.ImagineNumber = ImagineNumber + c.ImagineNumber;

        return temp;
    }
    complexNumber operator - (complexNumber &c) const
    {
        complexNumber temp{};

        temp.RealNumber = RealNumber - c.RealNumber;
        temp.ImagineNumber = ImagineNumber - c.ImagineNumber;

        return temp;
    }
    complexNumber operator *(const complexNumber &c) const {
        complexNumber temp{};
        temp.RealNumber = RealNumber * c.RealNumber;
        temp.ImagineNumber = RealNumber * c.ImagineNumber;

        return temp;
    }
    complexNumber operator /(const complexNumber &c) const {
        complexNumber temp{};
        auto r = c.RealNumber * c.RealNumber + c.ImagineNumber * c.ImagineNumber;
        temp.RealNumber = (RealNumber * c.RealNumber + ImagineNumber * c.ImagineNumber) / r;
        temp.RealNumber = (ImagineNumber * c.RealNumber - RealNumber * c.ImagineNumber) / r;
        return temp;
    }
    ~complexNumber() = default;

};
std::ostream& operator<<(std::ostream& stream, const complexNumber& obj) {
    return stream << obj.ImagineNumber << " + " << obj.RealNumber << "i";
}
class  Vector {
    double a1, a2, a3;
    double b1, b2, b3;
    double vector_a[3]{};
    double vector_b[3]{};
public:
    Vector(double _a1, double _a2, double _a3, double _b1, double _b2, double _b3) {
        a1 = _a1;
        a2 = _a2;
        a3 = _a3;
        vector_a[0] = a1;
        vector_a[1] = a2;
        vector_a[2] = a3;
        b1 = _b1;
        b2 = _b2;
        b3 = _b3;
        vector_b[0] = b1;
        vector_b[1] = b2;
        vector_b[2] = b3;
    }
    ~Vector() = default;
    double plus() {
        double vector_c[3];
        vector_c[0] = vector_a[0] + vector_b[0];
        vector_c[1] = vector_a[1] + vector_b[1];
        vector_c[2] = vector_a[2] + vector_b[2];
        for (double t : vector_c)
        {
            return t;
        }
    }
    double multiply() {
        double vector_c[3];
        vector_c[0] = vector_a[0] * vector_b[0];
        vector_c[1] = vector_a[1] * vector_b[1];
        vector_c[2] = vector_a[2] * vector_b[2];
        for (double t : vector_c)
        {
            return t;
        }
    }
};
class Circle {
    float p = 3.14;
    double r{};
public:
    explicit Circle(double _r):
            r(_r) {
        r = _r;
    }
    ~Circle() = default;
    double square() const {
        return p*pow(r, 2);
    }

     double distance() const {
        return 2 * p * r;
    }


};



int main() {
    return 0;
};