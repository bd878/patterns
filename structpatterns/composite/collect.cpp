void collect() {
  Cabinet* cabinet = new Cabinet("PC Cabinet");
  Chassis* chassis = new Chassis("PC Chassis");

  cabinet->Add(chassis);

  Bus* bus = new Bus("mca bus");
  bus->Add(new Card("16MBs Token Ring"));

  chassis->Add(bus);
  chassis->Add(new FloppyDisk("3.5in Floppy"));

  cout << "Full price is: " << chassis->NetPrice() << endl;
}