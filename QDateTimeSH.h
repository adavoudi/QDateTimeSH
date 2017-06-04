/******************************************************************************
 * QDateTimeSh: Adding the support of Solar Hijri date converstion from       *
 * Georgian date to the QDateTime class.                                      *
 * Note that function `toSolarHijriDate` is a modified version of `ToJalali`  *
 * in a similar [project](https://github.com/kharazi/qdateconvertor).         *
 *                                                                            *
 *                                                                            *
 * Copyright 2017 by Alireza Davoudi                                          *
 *                                                                            *
 *    This program is free software: you can redistribute it and/or modify    *
 *    it under the terms of the GNU General Public License as published by    *
 *    the Free Software Foundation, either version 3 of the License, or       *
 *    (at your option) any later version.                                     *
 *    This program is distributed in the hope that it will be useful,         *
 *    but WITHOUT ANY WARRANTY; without even the implied warranty of          *
 *    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the           *
 *    GNU General Public License for more details.                            *
 *                                                                            *
 *    You should have received a copy of the GNU General Public License       *
 *    along with this program.  If not, see <http://www.gnu.org/licenses/>.   *
 ******************************************************************************/
/**
 * @author Alireza Davoudi <DavoudiAlireza@gmail.com>
 */

#ifndef QDATETIMESH_H
#define QDATETIMESH_H

#include <QDateTime>

class QDateTimeSH : public QDateTime
{
public:
    QDateTimeSH();
    QDateTimeSH(const QDate &date);
    QDateTimeSH(const QDate &date, const QTime &time, Qt::TimeSpec spec = Qt::LocalTime);
    QDateTimeSH(const QDate &date, const QTime &time, Qt::TimeSpec spec, int offsetSeconds);
    QDateTimeSH(const QDate &date, const QTime &time, const QTimeZone &timeZone);
    QDateTimeSH(const QDateTime &other);

public:
    QString toString(const QString &format, bool isSolarHijri = true) const;
    QDate   toSolarHijriDate() const;

private:
    static QStringList MonthNames;
    static QStringList WeekDayNames;

private:
    static int div(int a,int b);
};

#endif // QDATETIMESH_H
