class Foo {
  int interface;

  Foo::Foo(int iface): interface{iface} {}
}

class Bar {
  int outerface;

  Bar::Bar(int oface): outerface{oface} {}
}

int main() {
  auto foo = Foo(1);
  auto bar = Bar(1);
}
