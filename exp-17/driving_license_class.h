
#ifndef DRIVING_LICENSE_CLASS_H
#define DRIVING_LICENSE_CLASS_H

#include <string>

/**
  * class driving_license_class
  * 
  */

class driving_license_class
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  driving_license_class ();

  /**
   * Empty Destructor
   */
  virtual ~driving_license_class ();

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
  void add_driving_license ()
  {
  }


  /**
   */
  void edit_drivindg_license ()
  {
  }


  /**
   */
  void edit_driving_license ()
  {
  }


  /**
   */
  void search_driving_license ()
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

  void lincense_id;
  void lincence_name;
  void license_description;
  void license_type;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of lincense_id
   * @param new_var the new value of lincense_id
   */
  void setLincense_id (void new_var)   {
      lincense_id = new_var;
  }

  /**
   * Get the value of lincense_id
   * @return the value of lincense_id
   */
  void getLincense_id ()   {
    return lincense_id;
  }

  /**
   * Set the value of lincence_name
   * @param new_var the new value of lincence_name
   */
  void setLincence_name (void new_var)   {
      lincence_name = new_var;
  }

  /**
   * Get the value of lincence_name
   * @return the value of lincence_name
   */
  void getLincence_name ()   {
    return lincence_name;
  }

  /**
   * Set the value of license_description
   * @param new_var the new value of license_description
   */
  void setLicense_description (void new_var)   {
      license_description = new_var;
  }

  /**
   * Get the value of license_description
   * @return the value of license_description
   */
  void getLicense_description ()   {
    return license_description;
  }

  /**
   * Set the value of license_type
   * @param new_var the new value of license_type
   */
  void setLicense_type (void new_var)   {
      license_type = new_var;
  }

  /**
   * Get the value of license_type
   * @return the value of license_type
   */
  void getLicense_type ()   {
    return license_type;
  }
private:


  void initAttributes () ;

};

#endif // DRIVING_LICENSE_CLASS_H
