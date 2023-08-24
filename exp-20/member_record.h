
#ifndef MEMBER_RECORD_H
#define MEMBER_RECORD_H

#include <string>
#include vector



/**
  * class member_record
  * 
  */

class member_record
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  member_record ();

  /**
   * Empty Destructor
   */
  virtual ~member_record ();

  // Static Public attributes
  //  

  // Public attributes
  //  


  // Public attribute accessor methods
  //  


  // Public attribute accessor methods
  //  



  /**
   */
  void retrive_member ()
  {
  }


  /**
   */
  void increase_book_issue ()
  {
  }


  /**
   */
  void decrease_book_issue ()
  {
  }


  /**
   */
  void pay_bill ()
  {
  }

protected:

  // Static Protected attributes
  //  

  // Protected attributes
  //  

public:


  // Protected attribute accessor methods
  //  

protected:

public:


  // Protected attribute accessor methods
  //  

protected:


private:

  // Static Private attributes
  //  

  // Private attributes
  //  

  void member_id;
  void type;
  void date_of_membership;
  void no_of_books_issued;
  void max_book_limit;
  void name;
  void address_;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of member_id
   * @param new_var the new value of member_id
   */
  void setMember_id (void new_var)   {
      member_id = new_var;
  }

  /**
   * Get the value of member_id
   * @return the value of member_id
   */
  void getMember_id ()   {
    return member_id;
  }

  /**
   * Set the value of type
   * @param new_var the new value of type
   */
  void setType (void new_var)   {
      type = new_var;
  }

  /**
   * Get the value of type
   * @return the value of type
   */
  void getType ()   {
    return type;
  }

  /**
   * Set the value of date_of_membership
   * @param new_var the new value of date_of_membership
   */
  void setDate_of_membership (void new_var)   {
      date_of_membership = new_var;
  }

  /**
   * Get the value of date_of_membership
   * @return the value of date_of_membership
   */
  void getDate_of_membership ()   {
    return date_of_membership;
  }

  /**
   * Set the value of no_of_books_issued
   * @param new_var the new value of no_of_books_issued
   */
  void setNo_of_books_issued (void new_var)   {
      no_of_books_issued = new_var;
  }

  /**
   * Get the value of no_of_books_issued
   * @return the value of no_of_books_issued
   */
  void getNo_of_books_issued ()   {
    return no_of_books_issued;
  }

  /**
   * Set the value of max_book_limit
   * @param new_var the new value of max_book_limit
   */
  void setMax_book_limit (void new_var)   {
      max_book_limit = new_var;
  }

  /**
   * Get the value of max_book_limit
   * @return the value of max_book_limit
   */
  void getMax_book_limit ()   {
    return max_book_limit;
  }

  /**
   * Set the value of name
   * @param new_var the new value of name
   */
  void setName (void new_var)   {
      name = new_var;
  }

  /**
   * Get the value of name
   * @return the value of name
   */
  void getName ()   {
    return name;
  }

  /**
   * Set the value of address_
   * @param new_var the new value of address_
   */
  void setAddress_ (void new_var)   {
      address_ = new_var;
  }

  /**
   * Get the value of address_
   * @return the value of address_
   */
  void getAddress_ ()   {
    return address_;
  }
private:


  void initAttributes () ;

};

#endif // MEMBER_RECORD_H
