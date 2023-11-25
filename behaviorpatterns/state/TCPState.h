class TCPState {
public:
  virtual void Transmit(TCPConnection*, TCPOctetStream*);
  virtual void ActiveOpen(TCPConnection*);
  virtual void PassiveOpen(TCPConnection*);
  virtual void Close(TCPConnection*);

  virtual void Synchronize(TCPConnection*);
  virtual void Acknowledge(TCPConnection*);
  virtual void Send(TCPConnection*);
protected:
  void ChangeState(TCPConnection*, TCPState*);
};

TCPConnection::TCPConnection() {
  _state = TCPClosed::Instance();
}

void TCPConnection::ChangeState(TCPState* s) {
  _state = s;
}

void TCPConnection::ActiveOpen() {
  _state->ActiveOpen(this);
}

void TCPConnection::PassiveOpen() {
  _state->PassiveOpen(this);
}

void TCPConnection::Close() {
  _state->Close(this);
}

void TCPConnection::Acknowledge() {
  _state->Acknowledge(this);
}

void TCPConnection::Synchronize() {
  _state->Synchronize(this);
}

void TCPState::Transmit(TCPConnection*, TCPOctetStream*) {}
void TCPState::ActiveOpen(TCPConnection*) {}
void TCPState::PassiveOpen(TCPConnection*) {}
void TCPState::Close(TCPConnection*) {}
void TCPState::Synchronize(TCPConnection*) {}

void TCPState::ChangeState(TCPConnection* t, TCPState* s) {
  t->ChangeState(s);
}