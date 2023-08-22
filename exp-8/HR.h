
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



  /**
   */
  void recruit ()
  {
  }


  /**
   */
  void monitor ()
  {
  }


  /**
   */
  void increment ()
  {
  }


  /**
   */
  void motivation ()
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

  void curriculam_vitae;
  void moniter;
  void salary_increment;
  void motivate;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of curriculam_vitae
   * @param new_var the new value of curriculam_vitae
   */
  void setCurriculam_vitae (void new_var)   {
      curriculam_vitae = new_var;
  }

  /**
   * Get the value of curriculam_vitae
   * @return the value of curriculam_vitae
   */
  void getCurriculam_vitae ()   {
    return curriculam_vitae;
  }

  /**
   * Set the value of moniter
   * @param new_var the new value of moniter
   */
  void setMoniter (void new_var)   {
      moniter = new_var;
  }

  /**
   * Get the value of moniter
   * @return the value of moniter
   */
  void getMoniter ()   {
    return moniter;
  }

  /**
   * Set the value of salary_increment
   * @param new_var the new value of salary_increment
   */
  void setSalary_increment (void new_var)   {
      salary_increment = new_var;
  }

  /**
   * Get the value of salary_increment
   * @return the value of salary_increment
   */
  void getSalary_increment ()   {
    return salary_increment;
  }

  /**
   * Set the value of motivate
   * @param new_var the new value of motivate
   */
  void setMotivate (void new_var)   {
      motivate = new_var;
  }

  /**
   * Get the value of motivate
   * @return the value of motivate
   */
  void getMotivate ()   {
    return motivate;
  }
private:


  void initAttributes () ;

};

#endif // HR_H
