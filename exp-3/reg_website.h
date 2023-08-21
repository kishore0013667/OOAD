
#ifndef REG_WEBSITE_H
#define REG_WEBSITE_H

#include <string>

/**
  * class reg_website
  * 
  */

class reg_website
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  reg_website ();

  /**
   * Empty Destructor
   */
  virtual ~reg_website ();

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
  void verification ()
  {
  }


  /**
   */
  void processing ()
  {
  }


  /**
   */
  void registration ()
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

  void qualification;
  void login_details;
  void fee_details;
  void exam_dates;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of qualification
   * @param new_var the new value of qualification
   */
  void setQualification (void new_var)   {
      qualification = new_var;
  }

  /**
   * Get the value of qualification
   * @return the value of qualification
   */
  void getQualification ()   {
    return qualification;
  }

  /**
   * Set the value of login_details
   * @param new_var the new value of login_details
   */
  void setLogin_details (void new_var)   {
      login_details = new_var;
  }

  /**
   * Get the value of login_details
   * @return the value of login_details
   */
  void getLogin_details ()   {
    return login_details;
  }

  /**
   * Set the value of fee_details
   * @param new_var the new value of fee_details
   */
  void setFee_details (void new_var)   {
      fee_details = new_var;
  }

  /**
   * Get the value of fee_details
   * @return the value of fee_details
   */
  void getFee_details ()   {
    return fee_details;
  }

  /**
   * Set the value of exam_dates
   * @param new_var the new value of exam_dates
   */
  void setExam_dates (void new_var)   {
      exam_dates = new_var;
  }

  /**
   * Get the value of exam_dates
   * @return the value of exam_dates
   */
  void getExam_dates ()   {
    return exam_dates;
  }
private:


  void initAttributes () ;

};

#endif // REG_WEBSITE_H
