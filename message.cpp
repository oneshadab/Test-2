e from any source, or with
// source in [0 .. NumberOfNodes()-1] to retrieve a message from a particular
// source.
//
// It returns the number of the instance which sent the message (which is equal
// to source, unless source is -1).
int Receive(int source);

// Each of these methods returns and consumes one item from the buffer of the
// appropriate instance. You must call these methods in the order in which the
// elements were appended to the message (so, for instance, if the message was
// created with PutChar, PutChar, PutLL, you must call GetChar, GetChar, GetLL
// in this order).
// If you call them in different order, or you call a Get* method after
// consuming all the contents of the buffer, behaviour is undefined.
// The "Int" in GetInt is interpreted as 32 bits, regardless of whether the
// actual int type will be 32 or 64 bits.
char GetChar(int source);
int GetInt(int source);
long long GetLL(int source);

#endif  // MESSAGE_H_
