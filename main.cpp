#include <iostream>
using namespace std;

double ToInches(double mm);
double ToCels(double fahren);
void OceanLevels();
void AirTemps();

int main() {
  OceanLevels();
  AirTemps();
}

double ToInches(double mm)
{
  const double INCHES = 0.03937 * mm;
  return INCHES;

}

double ToCels(double fahren)
{
  const double CLES = (fahren - 32) * 5 / 9;
  return CLES;
}

void OceanLevels()
{
  const double OCEAN_LEVEL_PAST = 1.8;
  double oceanLevelCurrent = 3.1;
  

  cout << "OCEAN LEVELS" << endl;
  cout << "============\n" << endl;
  cout << "Enter the rate of the rise of ocean levels per year in millimeters(Default 3.1): " << endl;
  cin >> oceanLevelCurrent;
  double ocean15years = oceanLevelCurrent * 15;
  double ocean30years = oceanLevelCurrent * 30;
  double ocean50years = oceanLevelCurrent * 50;
  cout << "The oceans have risen in the last 100 years by: " << OCEAN_LEVEL_PAST << "mm" << " or " << ToInches(OCEAN_LEVEL_PAST) << "In.\n" << endl;
  cout << "In 15 years the ocean levels will increase by: " << ocean15years << "mm" << " or " << ToInches(ocean15years) << "In.\n" << endl;
  cout << "In 30 years the ocean levels will increase by: " << ocean30years << "mm" << " or " << ToInches(ocean30years) << "In.\n" << endl;
  cout << "In 50 years the ocean levels will increase by: " << ocean50years << "mm" << " or " << ToInches(ocean50years) << "In.\n" << endl;

}

void AirTemps()
{
  const int TEMP_CHANGE = 2;
  double newYork = 85;
  double denver = 88;
  double phoenix = 106;
  double sacramento = 92;
  double losAngeles = 90;
  double newYork15 = newYork + (TEMP_CHANGE * 15);
  double denver15 = denver + (TEMP_CHANGE * 15);
  double phoenix15 = phoenix + (TEMP_CHANGE * 15);
  double sacramento15 = sacramento + (TEMP_CHANGE * 15);
  double losAngeles15 = losAngeles + (TEMP_CHANGE * 15);
  double newYork30 = newYork + (TEMP_CHANGE * 30);
  double denver30 = denver + (TEMP_CHANGE * 30);
  double phoenix30 = phoenix + (TEMP_CHANGE * 30);
  double sacramento30 = sacramento + (TEMP_CHANGE * 30);
  double losAngeles30 = losAngeles + (TEMP_CHANGE * 30);
  double newYork50 = newYork + (TEMP_CHANGE * 50);
  double denver50 = denver + (TEMP_CHANGE * 50);
  double phoenix50 = phoenix + (TEMP_CHANGE * 50);
  double sacramento50 = sacramento + (TEMP_CHANGE * 50);
  double losAngeles50 = losAngeles + (TEMP_CHANGE * 50);
  double newYorkJan = 26;
  double denverJan = 40;
  double phoenixJan = 57;
  double sacramentoJan = 56;
  double losAngelesJan = 54;
  double newYorkJan15 = newYorkJan + (TEMP_CHANGE * 15);
  double denverJan15 = denverJan + (TEMP_CHANGE * 15);
  double phoenixJan15 = phoenixJan + (TEMP_CHANGE * 15);
  double sacramentoJan15 = sacramentoJan + (TEMP_CHANGE * 15);
  double losAngelesJan15 = losAngelesJan + (TEMP_CHANGE * 15);
  double newYorkJan30 = newYorkJan + (TEMP_CHANGE * 30);
  double denverJan30 = denverJan + (TEMP_CHANGE * 30);
  double phoenixJan30 = phoenixJan + (TEMP_CHANGE * 30);
  double sacramentoJan30 = sacramentoJan + (TEMP_CHANGE * 30);
  double losAngelesJan30 = losAngelesJan + (TEMP_CHANGE * 30);
  double newYorkJan50 = newYorkJan + (TEMP_CHANGE * 50);
  double denverJan50 = denverJan + (TEMP_CHANGE * 50);
  double phoenixJan50 = phoenixJan + (TEMP_CHANGE * 50);
  double sacramentoJan50 = sacramentoJan + (TEMP_CHANGE * 50);
  double losAngelesJan50 = losAngelesJan + (TEMP_CHANGE * 50);

  cout << "AIR TEMP CHANGES" << endl;
  cout << "================\n" << endl;
  cout << "Average tempurature changes in July this year" << endl;
  cout << "New York City: " << newYork << "F or " << ToCels(newYork) << "C" << endl;
  cout << "Denver: " << denver << "F or " << ToCels(denver) << "C" << endl;
  cout << "Phoenix: " << phoenix << "F or " << ToCels(phoenix) << "C" << endl;
  cout << "Sacramento: " << sacramento << "F or " << ToCels(sacramento) << "C" << endl;
  cout << "Los Angeles: " << losAngeles << "F or " << ToCels(losAngeles) << "C" << endl;
  cout << "\nAverage tempurature changes in July in 15 years" << endl;
  cout << "New York City: " << newYork15 << "F or " << ToCels(newYork15) << "C" << endl;
  cout << "Denver: " << denver15 << "F or " << ToCels(denver15) << "C" << endl;
  cout << "Phoenix: " << phoenix15 << "F or " << ToCels(phoenix15) << "C" << endl;
  cout << "Sacramento: " << sacramento15 << "F or " << ToCels(sacramento15) << "C" << endl;
  cout << "Los Angeles: " << losAngeles15 << "F or " << ToCels(losAngeles15) << "C" << endl;
  cout << "\nAverage tempurature changes in July in 30 years" << endl;
  cout << "New York City: " << newYork30 << "F or " << ToCels(newYork30) << "C" << endl;
  cout << "Denver: " << denver30 << "F or " << ToCels(denver30) << "C" << endl;
  cout << "Phoenix: " << phoenix30 << "F or " << ToCels(phoenix30) << "C" << endl;
  cout << "Sacramento: " << sacramento30 << "F or " << ToCels(sacramento30) << "C" << endl;
  cout << "Los Angeles: " << losAngeles30 << "F or " << ToCels(losAngeles30) << "C" << endl;
  cout << "\nAverage tempurature changes in July in 50 years" << endl;
  cout << "New York City: " << newYork50 << "F or " << ToCels(newYork50) << "C" << endl;
  cout << "Denver: " << denver50 << "F or " << ToCels(denver50) << "C" << endl;
  cout << "Phoenix: " << phoenix50 << "F or " << ToCels(phoenix50) << "C" << endl;
  cout << "Sacramento: " << sacramento50 << "F or " << ToCels(sacramento50) << "C" << endl;
  cout << "Los Angeles: " << losAngeles50 << "F or " << ToCels(losAngeles50) << "C" << endl;

  cout << "\n-------------------------------------------------" << endl;

  cout << "\nAverage tempurature changes in January this year" << endl;
  cout << "New York City: " << newYorkJan << "F or " << ToCels(newYorkJan) << "C" << endl;
  cout << "Denver: " << denverJan << "F or " << ToCels(denverJan) << "C" << endl;
  cout << "Phoenix: " << phoenixJan << "F or " << ToCels(phoenixJan) << "C" << endl;
  cout << "Sacramento: " << sacramentoJan << "F or " << ToCels(sacramentoJan) << "C" << endl;
  cout << "Los Angeles: " << losAngelesJan << "F or " << ToCels(losAngelesJan) << "C" << endl;
  cout << "\nAverage tempurature changes in Januaray in 15 years" << endl;
  cout << "New York City: " << newYorkJan15 << "F or " << ToCels(newYorkJan15) << "C" << endl;
  cout << "Denver: " << denverJan15 << "F or " << ToCels(denverJan15) << "C" << endl;
  cout << "Phoenix: " << phoenixJan15 << "F or " << ToCels(phoenixJan15) << "C" << endl;
  cout << "Sacramento: " << sacramentoJan15 << "F or " << ToCels(sacramentoJan15) << "C" << endl;
  cout << "Los Angeles: " << losAngelesJan15 << "F or " << ToCels(losAngelesJan15) << "C" << endl;
  cout << "\nAverage tempurature changes in Januaray in 30 years" << endl;
  cout << "New York City: " << newYorkJan30 << "F or " << ToCels(newYorkJan30) << "C" << endl;
  cout << "Denver: " << denverJan30 << "F or " << ToCels(denverJan30) << "C" << endl;
  cout << "Phoenix: " << phoenixJan30 << "F or " << ToCels(phoenixJan30) << "C" << endl;
  cout << "Sacramento: " << sacramentoJan30 << "F or " << ToCels(sacramentoJan30) << "C" << endl;
  cout << "Los Angeles: " << losAngelesJan30 << "F or " << ToCels(losAngelesJan30) << "C" << endl;
  cout << "\nAverage tempurature changes in Januaray in 50 years" << endl;
  cout << "New York City: " << newYorkJan50 << "F or " << ToCels(newYorkJan50) << "C" << endl;
  cout << "Denver: " << denverJan50 << "F or " << ToCels(denverJan50) << "C" << endl;
  cout << "Phoenix: " << phoenixJan50 << "F or " << ToCels(phoenixJan50) << "C" << endl;
  cout << "Sacramento: " << sacramentoJan50 << "F or " << ToCels(sacramentoJan50) << "C" << endl;
  cout << "Los Angeles: " << losAngelesJan50 << "F or " << ToCels(losAngelesJan50) << "C" << endl;




}

