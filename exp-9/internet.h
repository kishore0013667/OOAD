
#ifndef INTERNET_H
#define INTERNET_H

#include <string>

/**
  * class internet
  * 
  */

class internet
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  internet ();

  /**
   * Empty Destructor
   */
  virtual ~internet ();

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
  void verify ()
  {
  }


  /**
   */
  void stastus ()
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

  void enter_id;
  void download;
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
   * Set the value of enter_id
   * @param new_var the new value of enter_id
   */
  void setEnter_id (void new_var)   {
      enter_id = new_var;
  }

  /**
   * Get the value of enter_id
   * @return the value of enter_id
   */
  void getEnter_id ()   {
    return enter_id;
  }

  /**
   * Set the value of download
   * @param new_var the new value of download
   */
  void setDownload (void new_var)   {
      download = new_var;
  }

  /**
   * Get the value of download
   * @return the value of download
   */
  void getDownload ()   {
    return download;
  }

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

#endif // INTERNET_H
