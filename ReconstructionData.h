#ifndef _RECONSTRUCTIONDATA_H_
#define _RECONSTRUCTIONDATA_H_

// VTK includes
#include "vtkImageData.h"
#include "vtkMatrix3x3.h"
#include "vtkMatrix4x4.h"

class ReconstructionData
{
public:
  ReconstructionData();
  ~ReconstructionData();

  vtkImageData* GetDepthMap();
  vtkMatrix3x3* GetMatrixK();
  vtkMatrix4x4* GetMatrixTR();

  void SetDepthMap(vtkImageData* data);
  void SetMatrixK(vtkMatrix3x3* matrix);
  void SetMatrixTR(vtkMatrix4x4* matrix);

private:
  vtkImageData* depthMap;
  vtkMatrix3x3* matrixK;
  vtkMatrix4x4* matrixTR;
};

#endif