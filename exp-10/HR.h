
#ifndef HR_H
#define HR_H

#include <string>

/**
  * class HR
  * 
  */

class HR
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  HR ();

  /**
   * Empty Destructor
   */
  virtual ~HR ();

  // Static Public attributes
  //  

  // Public attributes
  //  


  // Public attribute accessor methods
  //  


  // Public attribute accessor methods
  //  


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

  void verification;
  void resume;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of verification
   * @param new_var the new value of verification
   */
  void setVerification (void new_var)   {
      verification = new_var;
  }

  /**
   * Get the value of verification
   * @return the value of verification
   */
  void getVerification ()   {
    return verification;
  }

  /**
   * Set the value of resume
   * @param new_var the new value of resume
   */
  void setResume (void new_var)   {
      resume = new_var;
  }

  /**
   * Get the value of resume
   * @return the value of resume
   */
  void getResume ()   {
    return resume;
  }
private:


  void initAttributes () ;

};

#endif // HR_H
