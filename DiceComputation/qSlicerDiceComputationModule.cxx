/*==============================================================================

  Program: 3D Slicer

  Portions (c) Copyright Brigham and Women's Hospital (BWH) All Rights Reserved.

  See COPYRIGHT.txt
  or http://www.slicer.org/copyright/copyright.txt for details.

  Unless required by applicable law or agreed to in writing, software
  distributed under the License is distributed on an "AS IS" BASIS,
  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
  See the License for the specific language governing permissions and
  limitations under the License.
 
  This file was originally developed by Laurent Chauvin, Brigham and Women's
  Hospital. The project was supported by grants 5P01CA067165,
  5R01CA124377, 5R01CA138586, 2R44DE019322, 7R01CA124377,
  5R42CA137886, 8P41EB015898
 
==============================================================================*/

// Qt includes
#include <QtPlugin>

// DiceComputation Logic includes
#include <vtkSlicerDiceComputationLogic.h>

// DiceComputation includes
#include "qSlicerDiceComputationModule.h"
#include "qSlicerDiceComputationModuleWidget.h"

//-----------------------------------------------------------------------------
Q_EXPORT_PLUGIN2(qSlicerDiceComputationModule, qSlicerDiceComputationModule);

//-----------------------------------------------------------------------------
/// \ingroup Slicer_QtModules_ExtensionTemplate
class qSlicerDiceComputationModulePrivate
{
public:
  qSlicerDiceComputationModulePrivate();
};

//-----------------------------------------------------------------------------
// qSlicerDiceComputationModulePrivate methods

//-----------------------------------------------------------------------------
qSlicerDiceComputationModulePrivate
::qSlicerDiceComputationModulePrivate()
{
}

//-----------------------------------------------------------------------------
// qSlicerDiceComputationModule methods

//-----------------------------------------------------------------------------
qSlicerDiceComputationModule
::qSlicerDiceComputationModule(QObject* _parent)
  : Superclass(_parent)
  , d_ptr(new qSlicerDiceComputationModulePrivate)
{
}

//-----------------------------------------------------------------------------
qSlicerDiceComputationModule::~qSlicerDiceComputationModule()
{
}

//-----------------------------------------------------------------------------
QString qSlicerDiceComputationModule::helpText()const
{
  return "This is a loadable module bundled in an extension";
}

//-----------------------------------------------------------------------------
QString qSlicerDiceComputationModule::acknowledgementText()const
{
  return "This work was was partially funded by NIH grant 3P41RR013218-12S1";
}

//-----------------------------------------------------------------------------
QStringList qSlicerDiceComputationModule::contributors()const
{
  QStringList moduleContributors;
  moduleContributors << QString("Jean-Christophe Fillion-Robin (Kitware)");
  return moduleContributors;
}

//-----------------------------------------------------------------------------
QIcon qSlicerDiceComputationModule::icon()const
{
  return QIcon(":/Icons/DiceComputation.png");
}

//-----------------------------------------------------------------------------
QStringList qSlicerDiceComputationModule::categories() const
{
  return QStringList() << "Examples";
}

//-----------------------------------------------------------------------------
QStringList qSlicerDiceComputationModule::dependencies() const
{
  return QStringList();
}

//-----------------------------------------------------------------------------
void qSlicerDiceComputationModule::setup()
{
  this->Superclass::setup();
}

//-----------------------------------------------------------------------------
qSlicerAbstractModuleRepresentation * qSlicerDiceComputationModule
::createWidgetRepresentation()
{
  return new qSlicerDiceComputationModuleWidget;
}

//-----------------------------------------------------------------------------
vtkMRMLAbstractLogic* qSlicerDiceComputationModule::createLogic()
{
  return vtkSlicerDiceComputationLogic::New();
}