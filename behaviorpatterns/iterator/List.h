template <class List>
class List {
public:
  List(long size = DEFAULT_LIST_CAPACITY);

  long Count() const;
  Item& Get(long index) const;
  // ...
};

template <class Item>
Iterator<Item>* List<Item>::CreateIterator() const {
  return new ListIterator<Item>(this);
}