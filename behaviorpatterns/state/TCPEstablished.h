class TCPEstablished : public TCPState {
public:
  static TCPState* Instance();

  virtual void Transmit(TCPConnection*, TCPOctetStream*);
  virtual void Close(TCPConnection*);
};

class TCPListen : public TCPState {
public:
  static TCPState* Instance();

  virtual void Send(TCPConnection*);
  // ...
};

class TCPClosed : public TCPState {
public:
  static TCPState* Instance();

  virtual void ActiveOpen(TCPConnection*);
  virtual void PassiveOpen(TCPConnection*);
  // ...
};

void TCPClosed::ActiveOpen(TCPConnection* t) {
  // послать SYN, получить SYN, ACK и т.п.
  ChangeState(t, TCPEstablished::Instance());
}

void TCPClosed::PassiveOpen(TCPConnection* t) {
  ChangeState(t, TCPListen::Instance());
}

void TCPEstablished::Close(TCPConnection* t) {
  // послать FIN, получить ACK для FIN

  ChangeState(t, TCPListen::Instance());
}

void TCPEstablished::Transmit(
  TCPConnection* t, TCPOctetStream* o
) {
  t->ProcessOctet(o);
}

void TCPListen::Send(TCPConnection* t) {
  // послать SYN, получить SYN, ACK и т.д.

  ChangeState(t, TCPEstablished::Instance());
}