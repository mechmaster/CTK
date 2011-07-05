/*=========================================================================

  Library:   CTK

  Copyright (c) Kitware Inc.

  Licensed under the Apache License, Version 2.0 (the "License");
  you may not use this file except in compliance with the License.
  You may obtain a copy of the License at

      http://www.commontk.org/LICENSE

  Unless required by applicable law or agreed to in writing, software
  distributed under the License is distributed on an "AS IS" BASIS,
  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
  See the License for the specific language governing permissions and
  limitations under the License.

=========================================================================*/

// CTK includes
#include "ctkVTKThresholdWidget.h"
#include "ctkVTKThresholdWidgetPlugin.h"

//-----------------------------------------------------------------------------
ctkVTKThresholdWidgetPlugin
::ctkVTKThresholdWidgetPlugin(QObject *parentObject)
 : QObject(parentObject)
{
}

//-----------------------------------------------------------------------------
QWidget *ctkVTKThresholdWidgetPlugin::createWidget(QWidget *parentWidget)
{
  ctkVTKThresholdWidget* newWidget =
    new ctkVTKThresholdWidget(parentWidget);
  return newWidget;
}

//-----------------------------------------------------------------------------
QString ctkVTKThresholdWidgetPlugin::domXml() const
{
  return "<widget class=\"ctkVTKThresholdWidget\" \
          name=\"Threshold\">\n"
          "</widget>\n";
}

//-----------------------------------------------------------------------------
QString ctkVTKThresholdWidgetPlugin::includeFile() const
{
  return "ctkVTKThresholdWidget.h";
}

//-----------------------------------------------------------------------------
bool ctkVTKThresholdWidgetPlugin::isContainer() const
{
  return false;
}

//-----------------------------------------------------------------------------
QString ctkVTKThresholdWidgetPlugin::name() const
{
  return "ctkVTKThresholdWidget";
}