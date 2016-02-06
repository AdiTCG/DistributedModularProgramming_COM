#ifdef MATHDLLSRC_EXPORTS
#define DLLLINK __declspec(dllexport)
#else
#define DLLLINK __declspec(dllimport)
#endif

class DLLLINK Circle
{
private:
	double m_dRadius;
public:
	Circle();
	void SetRadius(double dRadius);
	double GetArea();
};

