#ifndef WIDGET_H
#define WIDGET_H

#include <QtGui>
#include <QGLWidget>
#include <QVector3D>

const size_t SIDES_NUM = 6;
const size_t VERTEX_NUM = 4;
const size_t VECTORS_NUM = 3;

/*class TPoint {
public:
    TPoint(qreal x, qreal y, qreal z);
    qreal x();
    qreal y();
    qreal z();
    void setX(qreal val);
    void setY(qreal val);
    void setZ(qreal val);

private:
    qreal inX;
    qreal inY;
    qreal inZ;
};*/

class Widget : public QGLWidget
{
public:
    Widget(QWidget *parent = 0);

protected:
    void initializeGL();
    void resizeGL(int nWidth, int nHeight);
    void paintGL();
    void mousePressEvent(QMouseEvent* pe);
    void mouseMoveEvent(QMouseEvent* pe);
    void mouseReleaseEvent(QMouseEvent* pe);
    void wheelEvent(QWheelEvent *);

private:
    int xRotation, yRotation, zRotation, scale;
    QPoint mousePos;
    qreal currentScale;
    qreal Approximation;
    qreal functionLen;

    void drawAxis();
    void drawParaboloide();
};

#endif // WIDGET_H
