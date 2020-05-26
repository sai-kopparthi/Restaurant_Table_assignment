//
// Table.h
//
#ifndef TABLE_H
#define TABLE_H
class Table
{
  public:
    Table(int n);
    int maxOccupancy(void) const;
    int currentOccupancy(void) const;
    bool addGuests(int n);
  private:
    const int maxGuests;
    int numGuests;
};
#endif
