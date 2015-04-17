#include "qtwin.h"

using namespace SmartCNController;

QtWin::QtWin(QWidget *parent, Qt::WFlags flags)
	: QMainWindow(parent, flags)
{
	ui.setupUi(this);
	ui.simulationView->init(SIMULATION_VIEW, this);
}

QtWin::~QtWin()
{

}

void QtWin::glViewMousePressEvent(unsigned id, QMouseEvent *event) 
{
	/*
	SmartPointer<ViewPort> viewPort = getCurrentViewPort();
	if (viewPort.isNull()) return;

	if (event->buttons() & Qt::LeftButton)
	viewPort->startRotation(event->x(), event->y());

	else if (event->buttons() & (Qt::RightButton | Qt::MidButton))
	viewPort->startTranslation(event->x(), event->y());
	*/
}

void QtWin::glViewMouseMoveEvent(unsigned id, QMouseEvent *event) 
{
	/*
	SmartPointer<ViewPort> viewPort = getCurrentViewPort();
	if (viewPort.isNull()) return;

	if (event->buttons() & Qt::LeftButton) {
	viewPort->updateRotation(event->x(), event->y());
	redraw(true);

	} else if (event->buttons() & (Qt::RightButton | Qt::MidButton)) {
	viewPort->updateTranslation(event->x(), event->y());
	redraw(true);
	}
	*/
}


void QtWin::glViewWheelEvent(unsigned id, QWheelEvent *event) 
{
	/*
	SmartPointer<ViewPort> viewPort = getCurrentViewPort();
	if (viewPort.isNull()) return;

	if (event->delta() < 0) viewPort->zoomIn();
	else viewPort->zoomOut();

	redraw(true);
	*/
}


void QtWin::initializeGL(unsigned id) 
{
	/*
	LOG_DEBUG(5, "initializeGL(" << id << ")");

	GLenum err = glewInit();
	if (err != GLEW_OK) THROWS("Initializing GLEW: " << glewGetErrorString(err));

	switch (id) {
	case SIMULATION_VIEW:
	view->glInit();
	viewer->init();
	break;
	}
	*/
}


void QtWin::resizeGL(unsigned id, int w, int h)
{
	/*
	LOG_DEBUG(5, "resizeGL(" << id << ", " << w << ", " << h << ")");

	switch (id) {
	case SIMULATION_VIEW: view->resize(w, h); break;
	}
	*/
}


void QtWin::paintGL(unsigned id)
{
	/*
	LOG_DEBUG(5, "paintGL(" << id << ")");

	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

	switch (id) {
	case SIMULATION_VIEW: viewer->draw(*view); break;
	}
	*/
}
