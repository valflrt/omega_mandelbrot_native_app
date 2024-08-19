#ifndef APPS_SAMPLE_CONTROLLER_H
#define APPS_SAMPLE_CONTROLLER_H

#include <escher.h>
#include "mandelbrot_view.h"

namespace Mandelbrot
{

  class MandelbrotController : public ViewController
  {
  public:
    MandelbrotController(Responder *parentResponder);
    MandelbrotView *view() override;
    bool handleEvent(Ion::Events::Event event) override;
    void didBecomeFirstResponder() override;

  private:
    MandelbrotView m_mandelbrotView;
  };

}

#endif
