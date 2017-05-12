class Shape {
public:
    virtual double area() const = 0;
private:
    string _getId() const;
    string id;
};
