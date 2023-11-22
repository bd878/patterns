const int NCHARCODES = 128;

class GlyphFactory {
public:
  GlyphFactory();
  virtual ~GlyphFactory();

  virtual Character* CreateCharacter(char);
  virtual Row* CreateRow();
  virtual Column* CreateColumn();
private:
  Character* _character[NCHARCODES];
};

GlyphFactory::GlyphFactory() {
  for (int i = 0; i < NCHARCODES; ++i) {
    _character[i] = 0;
  }
}

Character* GlyphFactory::CreateCharacter(char c) {
  if (!_character[c]) {
    _character[c] = new Character(c);
  }

  return _character[c];
}

Row* GlyphFactory::CreateRow() {
  return new Row;
}

Column* GlyphFactory::CreateColumn() {
  return new Column;
}
