class Pizza
{
public:
  int size;

  Pizza(int s) : size(s) {}

  void makeDouble(Pizza p)
  {
    p.size *= 2;
  }
};