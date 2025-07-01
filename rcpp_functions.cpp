// rcpp_functions.cpp
#include <Rcpp.h>
using namespace Rcpp;

// [[Rcpp::export]]
DataFrame get_student_data() {
  // Simulated data - replace this with actual data retrieval logic
  CharacterVector rollno = CharacterVector::create("1", "2", "3");
  CharacterVector sname = CharacterVector::create("Student 1", "Student 2", "Student 3");
  IntegerVector sem = IntegerVector::create(1, 2, 3);
  CharacterVector gender = CharacterVector::create("Male", "Female", "Male");
  CharacterVector attendance = CharacterVector::create("60% (Pass)", "Less than 60% (Fail)", "60% (Pass)");
  CharacterVector branch = CharacterVector::create("Computer Science", "Information Science", "Mechanical");
  CharacterVector email = CharacterVector::create("student1@example.com", "student2@example.com", "student3@example.com");
  CharacterVector number = CharacterVector::create("1234567891", "1234567892", "1234567893");
  CharacterVector address = CharacterVector::create("Address 1", "Address 2", "Address 3");

  return DataFrame::create(
    Named("rollno") = rollno,
    Named("sname") = sname,
    Named("sem") = sem,
    Named("gender") = gender,
    Named("attendance") = attendance,
    Named("branch") = branch,
    Named("email") = email,
    Named("number") = number,
    Named("address") = address
  );
}
