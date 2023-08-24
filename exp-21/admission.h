
#ifndef ADMISSION_H
#define ADMISSION_H

#include <string>

/**
  * class admission
  * 
  */

class admission
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  admission ();

  /**
   * Empty Destructor
   */
  virtual ~admission ();

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
  void update ()
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

  void id;
  void date;
  void patient_name;
  void findings;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of id
   * @param new_var the new value of id
   */
  void setId (void new_var)   {
      id = new_var;
  }

  /**
   * Get the value of id
   * @return the value of id
   */
  void getId ()   {
    return id;
  }

  /**
   * Set the value of date
   * @param new_var the new value of date
   */
  void setDate (void new_var)   {
      date = new_var;
  }

  /**
   * Get the value of date
   * @return the value of date
   */
  void getDate ()   {
    return date;
  }

  /**
   * Set the value of patient_name
   * @param new_var the new value of patient_name
   */
  void setPatient_name (void new_var)   {
      patient_name = new_var;
  }

  /**
   * Get the value of patient_name
   * @return the value of patient_name
   */
  void getPatient_name ()   {
    return patient_name;
  }

  /**
   * Set the value of findings
   * @param new_var the new value of findings
   */
  void setFindings (void new_var)   {
      findings = new_var;
  }

  /**
   * Get the value of findings
   * @return the value of findings
   */
  void getFindings ()   {
    return findings;
  }
private:


  void initAttributes () ;

};

#endif // ADMISSION_H
