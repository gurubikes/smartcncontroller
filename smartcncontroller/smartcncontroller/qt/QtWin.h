#ifndef QTWIN_H
#define QTWIN_H

#include <QtGui/QMainWindow>
#include "ui_qtwin.h"

namespace SmartCNController 
{
	class QtWin : public QMainWindow
	{
		Q_OBJECT

	public:
		QtWin(QWidget *parent = 0, Qt::WFlags flags = 0);
		~QtWin();

		void glViewMousePressEvent(unsigned id, QMouseEvent *event);
		void glViewMouseMoveEvent(unsigned id, QMouseEvent *event);
		void glViewWheelEvent(unsigned id, QWheelEvent *event);

		void initializeGL(unsigned id);
		void resizeGL(unsigned id, int w, int h);
		void paintGL(unsigned id);

	private:
		Ui::QtWinClass ui;
	};
}

#endif // QTWIN_H
