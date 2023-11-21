#pragma once

class Singleton {
public:
  static void Register(const char* name, Singleton*);
  static Singleton* Instance();
protected:
  Singleton();
  static Singleton* Lookup(const char* name);
private:
  static Singleton* _instance;
  static List<NameSingletonPair>* _registry;
};