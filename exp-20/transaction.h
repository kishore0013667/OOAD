
#ifndef TRANSACTION_H
#define TRANSACTION_H

#include <string>
#include vector



/**
  * class transaction
  * 
  */

class transaction
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  transaction ();

  /**
   * Empty Destructor
   */
  virtual ~transaction ();

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
  void delete_transaction ()
  {
  }


  /**
   */
  void create_transaction ()
  {
  }


  /**
   */
  void retrive_transaction ()
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

  void transaction_id;
  void member_id;
  void book_id;
  void date_of_issue;
  void due_date;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of transaction_id
   * @param new_var the new value of transaction_id
   */
  void setTransaction_id (void new_var)   {
      transaction_id = new_var;
  }

  /**
   * Get the value of transaction_id
   * @return the value of transaction_id
   */
  void getTransaction_id ()   {
    return transaction_id;
  }

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
   * Set the value of book_id
   * @param new_var the new value of book_id
   */
  void setBook_id (void new_var)   {
      book_id = new_var;
  }

  /**
   * Get the value of book_id
   * @return the value of book_id
   */
  void getBook_id ()   {
    return book_id;
  }

  /**
   * Set the value of date_of_issue
   * @param new_var the new value of date_of_issue
   */
  void setDate_of_issue (void new_var)   {
      date_of_issue = new_var;
  }

  /**
   * Get the value of date_of_issue
   * @return the value of date_of_issue
   */
  void getDate_of_issue ()   {
    return date_of_issue;
  }

  /**
   * Set the value of due_date
   * @param new_var the new value of due_date
   */
  void setDue_date (void new_var)   {
      due_date = new_var;
  }

  /**
   * Get the value of due_date
   * @return the value of due_date
   */
  void getDue_date ()   {
    return due_date;
  }
private:


  void initAttributes () ;

};

#endif // TRANSACTION_H
