template <class Item>
class AbstractList {
public:
  virtual Iterator<Item>* CreateIterator() const = 0;
  // ...
};
