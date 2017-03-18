#ifndef IMPERIAL_H
#define IMPERIAL_H

class Imperial
{
    public:
        //Print the output of our calculations. Optionally use unit symbols
        //IE character 'C' for Celsius as part of the output
        //1 = enabled 0 or any other junk = disabled
        void convAcresToHectaresAndPrint(float acres, bool useUnitSymbols = false);
        void convMilesToKilometersAndPrint(float miles, bool useUnitSymbols = false);
        void convYardsToMetersAndPrint(float yards, bool useUnitSymbols = false);
        void convFeetToMetersAndPrint(float feet, bool useUnitSymbols = false);
        void convInchesToCentimetresAndPrint(float inches, bool useUnitSymbols = false);

    private:
        float convAcresToHectares(float acres);
        float convMilesToKilometers(float miles);
        float convYardsToMeters(float yards);
        float convFeetToMeters(float feet);
        float convInchesToCentimetres(float inches);
};

#endif // IMPERIAL_H
