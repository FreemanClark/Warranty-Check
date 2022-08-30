#ifndef WARRANTY_H
#define WARRANTY_H
#include <iostream>
using namespace std;

class Warranty
{
    public:
        /** Default constructor */
        Warranty(istream& in);
        /** Default destructor */
        virtual ~Warranty();

        /** Access date
         * \return The current value of date
         */
        string Getdate() { return date; }
        /** Set date
         * \param val New value to set
         */
        void Setdate(string val) { date = val; }
        /** Access terms
         * \return The current value of terms
         */
        string Getterms() { return terms; }
        /** Set terms
         * \param val New value to set
         */
        void Setterms(string val) { terms = val; }
        /** Access item
         * \return The current value of item
         */
        string Getitem() { return item; }
        /** Set item
         * \param val New value to set
         */
        void Setitem(string val) { item = val; }

        string getSummary();

    protected:

    private:
        string date; //!< Member variable "date"
        string terms; //!< Member variable "terms"
        string item; //!< Member variable "item"
};

#endif // WARRANTY_H
