////////////////////////////////////////////////////////////////////////////////
// -------------------------------------------------------------------------- //
//                                                                            //
//                        (C) 2011-2013  David Krutsko                        //
//                        See LICENSE.md for copyright                        //
//                                                                            //
// -------------------------------------------------------------------------- //
////////////////////////////////////////////////////////////////////////////////

//----------------------------------------------------------------------------//
// Prefaces                                                                   //
//----------------------------------------------------------------------------//

#ifndef RANDOM_H
#define RANDOM_H

#include <QGlobal.h>



//----------------------------------------------------------------------------//
// Globals                                                                    //
//----------------------------------------------------------------------------//

qint32 Random (qint32 max);
qint32 Random (qint32 min, qint32 max);
float  Random (float  max);
float  Random (float  min, float  max);

#endif // RANDOM_H