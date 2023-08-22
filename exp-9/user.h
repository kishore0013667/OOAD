
#ifndef USER_H
#define USER_H

#include <string>

/**
  * class user
  * 
  */

class user
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  user ();

  /**
   * Empty Destructor
   */
  virtual ~user ();

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
  void surf_books ()
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

  void log_in;
  void log_out;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of log_in
   * @param new_var the new value of log_in
   */
  void setLog_in (void new_var)   {
      log_in = new_var;
  }

  /**
   * Get the value of log_in
   * @return the value of log_in
   */
  void getLog_in ()   {
    return log_in;
  }

  /**
   * Set the value of log_out
   * @param new_var the new value of log_out
   */
  void setLog_out (void new_var)   {
      log_out = new_var;
  }

  /**
   * Get the value of log_out
   * @return the value of log_out
   */
  void getLog_out ()   {
    return log_out;
  }
private:


  void initAttributes () ;

};

#endif // USER_H
