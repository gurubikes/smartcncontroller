/******************************************************************************\

    SmartCNController is an Open-Source CAM software.
    Copyright (C) 2015 Gregory St-Jean <stjean.gregory@gmail.com>

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 2 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.

\******************************************************************************/

#ifndef SMARTCNCONTROLLER_GLVIEW_H
#define SMARTCNCONTROLLER_GLVIEW_H

#include <QGLWidget>


namespace SmartCNController
{
	class QtWin;

	class GLView : public QGLWidget 
	{
		Q_OBJECT;

		unsigned id;
		QtWin *qtWin;

		public:
		GLView(QWidget *parent = 0);
		~GLView() {}

		void init(unsigned id, QtWin *qtWin) {this->id = id; this->qtWin = qtWin;}

		// From QWidget
		void mousePressEvent(QMouseEvent *event);
		void mouseMoveEvent(QMouseEvent *event);
		void wheelEvent(QWheelEvent *event);

		// From QGLWidget
		void initializeGL();
		void resizeGL(int w, int h);
		void paintGL();
	};
}

#endif // SMARTCNCONTROLLER_GLVIEW_H

